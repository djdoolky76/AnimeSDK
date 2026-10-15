#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNNIFBHNPDI;
class IEIIGGKKALK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IGOJNKPNAPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16416310)
#define IGOJNKPNAPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16416340)
#define IGOJNKPNAPA___C__HANDLEPOSTPROCESS_B__0_0_OFFSET UNITYSDK_OFFSET(0x16416350)
#define IGOJNKPNAPA___C__HANDLEPOSTPROCESS_B__0_1_OFFSET UNITYSDK_OFFSET(0x164166B0)

inline static constexpr unsigned int IGOJNKPNAPA___c_TypeDefinitionIndex = 67146;

	class IGOJNKPNAPA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::IEIIGGKKALK*, ::System::UInt32>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::IEIIGGKKALK*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DEA0);
		}

		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::IEIIGGKKALK*>*, ::FNNIFBHNPDI*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::IEIIGGKKALK*>*, ::FNNIFBHNPDI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DEA8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DEB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGOJNKPNAPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOJNKPNAPA___C_CTOR_OFFSET))(this);
		}

		::FNNIFBHNPDI* _HandlePostProcess_b__0_0(::System::Collections::Generic::IEnumerable_1<::IEIIGGKKALK*>* a1)
		{
			return ((::FNNIFBHNPDI*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IEIIGGKKALK*>*))((::PBYTE)hIl2Cpp + IGOJNKPNAPA___C__HANDLEPOSTPROCESS_B__0_0_OFFSET))(this, a1);
		}

		::System::UInt32 _HandlePostProcess_b__0_1(::IEIIGGKKALK* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::IEIIGGKKALK*))((::PBYTE)hIl2Cpp + IGOJNKPNAPA___C__HANDLEPOSTPROCESS_B__0_1_OFFSET))(this, a1);
		}

	};
