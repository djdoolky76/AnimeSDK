#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class LIOFFJGPEOK;
class MJNGFEGNCOA;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHLJIHEKIOH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF53FC0)
#define LHLJIHEKIOH_EJJDACFKIMH_OFFSET UNITYSDK_OFFSET(0xBF53FA0)
#define LHLJIHEKIOH_FKAGINFBGMN_1_OFFSET UNITYSDK_OFFSET(0xBF53640)
#define LHLJIHEKIOH_FKAGINFBGMN_OFFSET UNITYSDK_OFFSET(0xBF53480)
#define LHLJIHEKIOH_FMKBOIJHAGA_1_OFFSET UNITYSDK_OFFSET(0xBF53110)
#define LHLJIHEKIOH_FMKBOIJHAGA_OFFSET UNITYSDK_OFFSET(0xBF530B0)
#define LHLJIHEKIOH_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xBF53EB0)
#define LHLJIHEKIOH_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xBF53AA0)
#define LHLJIHEKIOH_MFKLNHDCIJO_OFFSET UNITYSDK_OFFSET(0xBF53B00)
#define LHLJIHEKIOH_NDAKFHEBOEG_OFFSET UNITYSDK_OFFSET(0xBF53FB0)
#define LHLJIHEKIOH_OJJOLGFELEM_OFFSET UNITYSDK_OFFSET(0xBF53F20)
#define LHLJIHEKIOH_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xBF52D80)
#define LHLJIHEKIOH_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xBF52E80)
#define LHLJIHEKIOH_PHJFCOIGMLM_2_OFFSET UNITYSDK_OFFSET(0xBF53170)

inline static constexpr unsigned int LHLJIHEKIOH_TypeDefinitionIndex = 55275;

	class LHLJIHEKIOH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::System::Collections::Generic::List_1<::LIOFFJGPEOK*>* ACFOHECOIBL; // 0x18
		::System::Boolean EMODOHCJFCD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Boolean FMKBOIJHAGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_FMKBOIJHAGA_OFFSET))(this);
		}

		::System::Boolean FMKBOIJHAGA_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_FMKBOIJHAGA_1_OFFSET))(this, a1);
		}

		::LIOFFJGPEOK* PHJFCOIGMLM_2(::System::Object* a1)
		{
			return ((::LIOFFJGPEOK*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_PHJFCOIGMLM_2_OFFSET))(this, a1);
		}

		::System::Void FKAGINFBGMN(::LIOFFJGPEOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIOFFJGPEOK*))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_FKAGINFBGMN_OFFSET))(this, a1);
		}

		::System::Void FKAGINFBGMN_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_FKAGINFBGMN_1_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void MFKLNHDCIJO(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_MFKLNHDCIJO_OFFSET))(this, a1);
		}

		::LIOFFJGPEOK* OJJOLGFELEM()
		{
			return ((::LIOFFJGPEOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_OJJOLGFELEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::LIOFFJGPEOK*>* EJJDACFKIMH()
		{
			return ((::System::Collections::Generic::List_1<::LIOFFJGPEOK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_EJJDACFKIMH_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* NDAKFHEBOEG()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLJIHEKIOH_NDAKFHEBOEG_OFFSET))(this);
		}

	};
