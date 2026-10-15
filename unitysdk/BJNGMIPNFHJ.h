#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CIAENAKKAAP.h"
#include "unitysdk/ECHBDOALEKN.h"
#include "unitysdk/IBAKJOHPFLE.h"
#include "unitysdk/IDJCEFPNPMM.h"
#include "unitysdk/KGBCNCNAAFA.h"
#include "unitysdk/LPBCNFBMCJK.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BJNGMIPNFHJ_CEODGGHMLLH_OFFSET UNITYSDK_OFFSET(0x1DCE2B40)
#define BJNGMIPNFHJ_DBDKIINFFBN_OFFSET UNITYSDK_OFFSET(0x1DCE02C0)
#define BJNGMIPNFHJ_GNJHJPMIGLP_OFFSET UNITYSDK_OFFSET(0x1DCE15C0)
#define BJNGMIPNFHJ_GNOOEFBHPOM_OFFSET UNITYSDK_OFFSET(0x1DCE32E0)
#define BJNGMIPNFHJ_IKHHOJNBDHA_OFFSET UNITYSDK_OFFSET(0x1DCE2540)
#define BJNGMIPNFHJ_JEAKEAKDMGK_OFFSET UNITYSDK_OFFSET(0x1DCE39D0)
#define BJNGMIPNFHJ_NKOEDHNDBKF_OFFSET UNITYSDK_OFFSET(0x1DCE4AE0)
#define BJNGMIPNFHJ_PEAHIFLMDPI_OFFSET UNITYSDK_OFFSET(0x1DCE1160)
#define BJNGMIPNFHJ_PHLCEMNKOOD_OFFSET UNITYSDK_OFFSET(0x1DCE1C30)

inline static constexpr unsigned int BJNGMIPNFHJ_TypeDefinitionIndex = 6182;

	class BJNGMIPNFHJ : public ::System::Object
	{
	public:
		static ::System::Boolean DBDKIINFFBN(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1, ::IDJCEFPNPMM a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*, ::IDJCEFPNPMM))((::PBYTE)hIl2Cpp + BJNGMIPNFHJ_DBDKIINFFBN_OFFSET))(a1, a2);
		}

		static ::System::Boolean PEAHIFLMDPI(::System::Object* a1, ::Il2CppArray<::System::Double>* a2, ::System::Object* a3, ::System::Double a4)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Double>*, ::System::Object*, ::System::Double))((::PBYTE)hIl2Cpp + BJNGMIPNFHJ_PEAHIFLMDPI_OFFSET))(a1, a2, a3, a4);
		}

		static ::CIAENAKKAAP GNJHJPMIGLP(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1)
		{
			return ((::CIAENAKKAAP(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + BJNGMIPNFHJ_GNJHJPMIGLP_OFFSET))(a1);
		}

		static ::System::Boolean PHLCEMNKOOD(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BJNGMIPNFHJ_PHLCEMNKOOD_OFFSET))(a1, a2, a3);
		}

		static ::KGBCNCNAAFA IKHHOJNBDHA(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1)
		{
			return ((::KGBCNCNAAFA(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + BJNGMIPNFHJ_IKHHOJNBDHA_OFFSET))(a1);
		}

		static ::LPBCNFBMCJK CEODGGHMLLH(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1)
		{
			return ((::LPBCNFBMCJK(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + BJNGMIPNFHJ_CEODGGHMLLH_OFFSET))(a1);
		}

		static ::IBAKJOHPFLE GNOOEFBHPOM(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1)
		{
			return ((::IBAKJOHPFLE(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + BJNGMIPNFHJ_GNOOEFBHPOM_OFFSET))(a1);
		}

		static ::System::Boolean JEAKEAKDMGK(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BJNGMIPNFHJ_JEAKEAKDMGK_OFFSET))(a1, a2, a3, a4);
		}

		static ::ECHBDOALEKN NKOEDHNDBKF(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1)
		{
			return ((::ECHBDOALEKN(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + BJNGMIPNFHJ_NKOEDHNDBKF_OFFSET))(a1);
		}

	};
