#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKFBNIHNLGG.h"
#include "unitysdk/System/Object.h"
class JMHDGNNIFCA;
namespace RPG::GameCore { class BattleInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define JMHDGNNIFCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB260330)
#define JMHDGNNIFCA_FJGGODFCDCJ_OFFSET UNITYSDK_OFFSET(0xB25FF90)
#define JMHDGNNIFCA_KFPKDOLMMNC_OFFSET UNITYSDK_OFFSET(0xB25F570)
#define JMHDGNNIFCA_PAKFEFGCHFM_OFFSET UNITYSDK_OFFSET(0xB25F200)

inline static constexpr unsigned int JMHDGNNIFCA_TypeDefinitionIndex = 59009;

	class JMHDGNNIFCA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PKFBNIHNLGG>* CNJNGIOGGKH; // 0x10
		::System::UInt32 KAPJNJDCACL; // 0x18
		::System::UInt32 AMCPMEAOJJK; // 0x1C
		::System::UInt32 FGIGJGGFIOP; // 0x20
		static ::Il2CppArray<::System::Byte>** StaticGet_DMMAEFCLCHK()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "JMHDGNNIFCA")->GetStaticField(0x20990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHDGNNIFCA_CTOR_OFFSET))(this);
		}

		::System::UInt32 PAKFEFGCHFM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHDGNNIFCA_PAKFEFGCHFM_OFFSET))(this);
		}

		::System::Boolean KFPKDOLMMNC(::RPG::GameCore::BattleInstance* a1, ::JMHDGNNIFCA* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::JMHDGNNIFCA*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + JMHDGNNIFCA_KFPKDOLMMNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FJGGODFCDCJ(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + JMHDGNNIFCA_FJGGODFCDCJ_OFFSET))(this, a1);
		}

	};
