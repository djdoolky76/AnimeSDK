#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define IFGHNHEJCLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15F171C0)
#define IFGHNHEJCLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15F17200)
#define IFGHNHEJCLF___C___CREATEREQUIREINFOS_B__26_0_OFFSET UNITYSDK_OFFSET(0x15F17210)
#define IFGHNHEJCLF___C___CREATEREQUIREINFOS_B__26_2_OFFSET UNITYSDK_OFFSET(0x15F17220)

inline static constexpr unsigned int IFGHNHEJCLF___c_TypeDefinitionIndex = 79671;

	class IFGHNHEJCLF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>** StaticGet___9__26_2()
		{
			return (::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x578A0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x578A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x578B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFGHNHEJCLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGHNHEJCLF___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* __CreateRequireInfos_b__26_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + IFGHNHEJCLF___C___CREATEREQUIREINFOS_B__26_0_OFFSET))(this, a1);
		}

		::System::Boolean __CreateRequireInfos_b__26_2(::FKLECLLJCEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKLECLLJCEH*))((::PBYTE)hIl2Cpp + IFGHNHEJCLF___C___CREATEREQUIREINFOS_B__26_2_OFFSET))(this, a1);
		}

	};
