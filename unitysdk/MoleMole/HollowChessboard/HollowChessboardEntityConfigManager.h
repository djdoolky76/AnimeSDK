#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class BOOAPJIDGLO;
class CMLEOMMLODC;
class DCKOIEAAEDL;
class MLPGEJOFJBL;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_ANELNDIHOFN_OFFSET UNITYSDK_OFFSET(0x130DFFF0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x130DF770)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x130DFEE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_FBCCBMGGKFJ_OFFSET UNITYSDK_OFFSET(0x130DF9A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_GCMAHCACHFD_OFFSET UNITYSDK_OFFSET(0x130DE540)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_GPANFOGIIEN_OFFSET UNITYSDK_OFFSET(0x130DF420)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_HCMHNNOPPNC_OFFSET UNITYSDK_OFFSET(0x130DF530)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_JPHOLHGCLIK_OFFSET UNITYSDK_OFFSET(0x130DE7E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_KDAPPHIFMIC_OFFSET UNITYSDK_OFFSET(0x130DFC40)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_MNABKFFGLNN_OFFSET UNITYSDK_OFFSET(0x130DF090)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_PDGEKFAPEFB_OFFSET UNITYSDK_OFFSET(0x130DE2A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x130DDE10)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x130DE090)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEntityConfigManager_TypeDefinitionIndex = 68707;

	class HollowChessboardEntityConfigManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MLPGEJOFJBL*>** StaticGet_ADBKEIHJHOI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MLPGEJOFJBL*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager_TypeDefinitionIndex)->GetStaticField(0x34A80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::CMLEOMMLODC*>** StaticGet_NOGPMAGBBAM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::CMLEOMMLODC*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager_TypeDefinitionIndex)->GetStaticField(0x34A88);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DCKOIEAAEDL*>** StaticGet_FFEJEANEBJL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::DCKOIEAAEDL*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager_TypeDefinitionIndex)->GetStaticField(0x34A90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BOOAPJIDGLO*>** StaticGet_HEBNCPHNFKM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::BOOAPJIDGLO*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager_TypeDefinitionIndex)->GetStaticField(0x34A98);
		}
		// static const ::System::String* PLFAHADDDBM; // 0x0
		// static const ::System::String* EBMPFOLPJAH; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_RESET_OFFSET))();
		}

		static ::BOOAPJIDGLO* PDGEKFAPEFB(::System::Int32 NMFFKCDMAMC)
		{
			return ((::BOOAPJIDGLO*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_PDGEKFAPEFB_OFFSET))(NMFFKCDMAMC);
		}

		static ::CMLEOMMLODC* GCMAHCACHFD(::System::Int32 NMFFKCDMAMC)
		{
			return ((::CMLEOMMLODC*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_GCMAHCACHFD_OFFSET))(NMFFKCDMAMC);
		}

		static ::System::Boolean JPHOLHGCLIK(::Foundation::AssetPath PJNJFACFJHP, ::Foundation::AssetRequestHandle& FCEIKAIDHPM)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_JPHOLHGCLIK_OFFSET))(PJNJFACFJHP, FCEIKAIDHPM);
		}

		static ::System::Void MNABKFFGLNN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_MNABKFFGLNN_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::BOOAPJIDGLO*>* HCMHNNOPPNC()
		{
			return ((::System::Collections::Generic::List_1<::BOOAPJIDGLO*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_HCMHNNOPPNC_OFFSET))();
		}

		static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
		}

		static ::MLPGEJOFJBL* FBCCBMGGKFJ(::System::Int32 NMFFKCDMAMC)
		{
			return ((::MLPGEJOFJBL*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_FBCCBMGGKFJ_OFFSET))(NMFFKCDMAMC);
		}

		static ::DCKOIEAAEDL* KDAPPHIFMIC(::System::Int32 NMFFKCDMAMC)
		{
			return ((::DCKOIEAAEDL*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_KDAPPHIFMIC_OFFSET))(NMFFKCDMAMC);
		}

		static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
		}

		static ::System::Collections::IEnumerator* ANELNDIHOFN(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_ANELNDIHOFN_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ);
		}

		static ::Il2CppArray<::Foundation::AssetPath>* GPANFOGIIEN()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_GPANFOGIIEN_OFFSET))();
		}
	};
}
