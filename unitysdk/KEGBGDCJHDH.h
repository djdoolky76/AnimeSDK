#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCLHMGFGEFK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KLEFGGIHGMI;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text { class StringBuilder; }

#define KEGBGDCJHDH_ACIJAIOJEAK_OFFSET UNITYSDK_OFFSET(0xB377EA0)
#define KEGBGDCJHDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB378E70)
#define KEGBGDCJHDH_ECGOHNPHOKH_OFFSET UNITYSDK_OFFSET(0xB377350)
#define KEGBGDCJHDH_EKMCDJNEDBM_OFFSET UNITYSDK_OFFSET(0xB377D70)
#define KEGBGDCJHDH_JIFANILBBEK_OFFSET UNITYSDK_OFFSET(0xB377F10)
#define KEGBGDCJHDH_KNKALOLLDEJ_OFFSET UNITYSDK_OFFSET(0xB376A20)
#define KEGBGDCJHDH_NFLGGCHDENJ_OFFSET UNITYSDK_OFFSET(0xB3772B0)

	class KEGBGDCJHDH : public ::System::Object
	{
	public:
		::RPG::GameCore::BlockNodeConfig* ALPMEMFCLJG; // 0x10
		::System::Collections::Generic::HashSet_1<::MCLHMGFGEFK>* OFPHHAJLNAI; // 0x18
		::KLEFGGIHGMI* OKPMJOCEKBC; // 0x20
		::System::Collections::Generic::Dictionary_2<::MCLHMGFGEFK, ::RPG::GameCore::BlockNodeConfig*>* BICDNBMIJPB; // 0x28
		::System::Collections::Generic::HashSet_1<::MCLHMGFGEFK>* FIPHAHPENBP; // 0x30
		::System::String* ANBDEIDCEAC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGBGDCJHDH_CTOR_OFFSET))(this);
		}

		::System::Boolean KNKALOLLDEJ(::MCLHMGFGEFK a1, ::RPG::GameCore::BlockNodeConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCLHMGFGEFK, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + KEGBGDCJHDH_KNKALOLLDEJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean NFLGGCHDENJ(::RPG::GameCore::BlockNodeConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + KEGBGDCJHDH_NFLGGCHDENJ_OFFSET))(this, a1);
		}

		::System::Boolean ECGOHNPHOKH(::MCLHMGFGEFK a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCLHMGFGEFK, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KEGBGDCJHDH_ECGOHNPHOKH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EKMCDJNEDBM(::MCLHMGFGEFK a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCLHMGFGEFK, ::System::Boolean))((::PBYTE)hIl2Cpp + KEGBGDCJHDH_EKMCDJNEDBM_OFFSET))(this, a1, a2);
		}

		::System::Void ACIJAIOJEAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGBGDCJHDH_ACIJAIOJEAK_OFFSET))(this);
		}

		::System::Void JIFANILBBEK(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + KEGBGDCJHDH_JIFANILBBEK_OFFSET))(this, a1);
		}

	};
