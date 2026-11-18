#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix { class ILFixDynamicMethodWrapper_B1DB803920BB5C83; }
namespace IFix::Core { class AnonymousStorey; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Type; }

#define IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_CREATEBRIDGE_OFFSET UNITYSDK_OFFSET(0x1D058C00)
#define IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D058AB0)
#define IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1D058B40)
#define IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_GETPATCH_OFFSET UNITYSDK_OFFSET(0x1D058A40)
#define IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_INITWRAPPERARRAY_OFFSET UNITYSDK_OFFSET(0x1D058B90)
#define IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D058A30)

namespace IFix
{
	inline static constexpr unsigned int WrappersManagerImpl_37B51B261BFC81ED_TypeDefinitionIndex = 17900;

	class WrappersManagerImpl_37B51B261BFC81ED : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED__CTOR_OFFSET))(this, virtualMachine);
		}

		static ::IFix::ILFixDynamicMethodWrapper_B1DB803920BB5C83* GetPatch(::System::Int32 id)
		{
			return ((::IFix::ILFixDynamicMethodWrapper_B1DB803920BB5C83*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_GETPATCH_OFFSET))(id);
		}

		::System::Delegate* CreateDelegate(::System::Type* type, ::System::Int32 id, ::System::Object* anon)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_CREATEDELEGATE_OFFSET))(this, type, id, anon);
		}

		::System::Object* CreateWrapper(::System::Int32 id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_CREATEWRAPPER_OFFSET))(this, id);
		}

		::System::Object* InitWrapperArray(::System::Int32 len)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_INITWRAPPERARRAY_OFFSET))(this, len);
		}

		::IFix::Core::AnonymousStorey* CreateBridge(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* slots, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::IFix::Core::AnonymousStorey*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_37B51B261BFC81ED_CREATEBRIDGE_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, slots, virtualMachine);
		}
	};
}
