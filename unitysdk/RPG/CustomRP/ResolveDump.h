#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class FileInfo; }

#define RPG_CUSTOMRP_RESOLVEDUMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC433B0)
#define RPG_CUSTOMRP_RESOLVEDUMP_DUMPCPPGFXMEMORY_OFFSET UNITYSDK_OFFSET(0x1CC41470)
#define RPG_CUSTOMRP_RESOLVEDUMP_DUMPCSGFXMEMORY_OFFSET UNITYSDK_OFFSET(0x1CC41590)
#define RPG_CUSTOMRP_RESOLVEDUMP_RESOLVE_1_OFFSET UNITYSDK_OFFSET(0x1CC42AA0)
#define RPG_CUSTOMRP_RESOLVEDUMP_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1CC416B0)
#define RPG_CUSTOMRP_RESOLVEDUMP__EXTRACTPATH_OFFSET UNITYSDK_OFFSET(0x1CC41A10)
#define RPG_CUSTOMRP_RESOLVEDUMP__RESOLVE_OFFSET UNITYSDK_OFFSET(0x1CC41D00)
#define RPG_CUSTOMRP_RESOLVEDUMP__SAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0x1CC42CD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ResolveDump_TypeDefinitionIndex = 37744;

	class ResolveDump : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__CsCounter()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ResolveDump")->GetStaticField(0x9E30);
		}

		static ::System::Int32* StaticGet__CppCounter()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ResolveDump")->GetStaticField(0x9E34);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_CTOR_OFFSET))(this);
		}

		static ::System::Void DumpCppGfxMemory(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_DUMPCPPGFXMEMORY_OFFSET))(a1);
		}

		static ::System::Void DumpCsGfxMemory(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_DUMPCSGFXMEMORY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>* Resolve(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_RESOLVE_OFFSET))(a1, a2);
		}

		static ::System::Void Resolve_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_RESOLVE_1_OFFSET))(a1, a2);
		}

		static ::System::Void _ExtractPath(::Il2CppArray<::System::IO::FileInfo*>* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::IO::FileInfo*>*, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP__EXTRACTPATH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>* _Resolve(::System::Boolean a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>*(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP__RESOLVE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void _SaveToLocal(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Collections::Generic::List_1<::System::Object*>* a5, ::System::Collections::Generic::List_1<::System::Object*>* a6, ::System::Collections::Generic::List_1<::System::Object*>* a7)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP__SAVETOLOCAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

	};
}
