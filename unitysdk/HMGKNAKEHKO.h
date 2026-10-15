#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMGKNAKEHKO_NGNBEJLOCEL.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtSkillSetTargetPos; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMGKNAKEHKO_BJCIJDIOFEC_OFFSET UNITYSDK_OFFSET(0x15D71FC0)
#define HMGKNAKEHKO_CLPBEDKHGKG_OFFSET UNITYSDK_OFFSET(0x15D72D70)
#define HMGKNAKEHKO_COPPLGAFOKI_OFFSET UNITYSDK_OFFSET(0x15D741E0)
#define HMGKNAKEHKO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D705F0)
#define HMGKNAKEHKO_EECLPFKGGDE_OFFSET UNITYSDK_OFFSET(0x15D72310)
#define HMGKNAKEHKO_HLIBJCBCLLJ_OFFSET UNITYSDK_OFFSET(0x15D72B10)
#define HMGKNAKEHKO_IILBPDHMHHK_OFFSET UNITYSDK_OFFSET(0x15D738B0)
#define HMGKNAKEHKO_IODNKAMHCMA_OFFSET UNITYSDK_OFFSET(0x15D71750)
#define HMGKNAKEHKO_LABODAMKALC_OFFSET UNITYSDK_OFFSET(0x15D73500)
#define HMGKNAKEHKO_LBCACKLNMHP_OFFSET UNITYSDK_OFFSET(0x15D748B0)
#define HMGKNAKEHKO_LJFEHKLPKJA_OFFSET UNITYSDK_OFFSET(0x15D729E0)
#define HMGKNAKEHKO_MMMPBKJBBCK_OFFSET UNITYSDK_OFFSET(0x15D72190)
#define HMGKNAKEHKO_OHPOKECFHDK_OFFSET UNITYSDK_OFFSET(0x15D708D0)
#define HMGKNAKEHKO_OKECDBKGFJH_OFFSET UNITYSDK_OFFSET(0x15D74B00)
#define HMGKNAKEHKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D70620)

inline static constexpr unsigned int HMGKNAKEHKO_TypeDefinitionIndex = 53936;

	class HMGKNAKEHKO
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* FONENOEEOBG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillSetTargetPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillSetTargetPos*))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OHPOKECFHDK(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_OHPOKECFHDK_OFFSET))(this, a1);
		}

		::RPG::MVector3 BJCIJDIOFEC(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_BJCIJDIOFEC_OFFSET))(this, a1);
		}

		::System::Single MMMPBKJBBCK(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_MMMPBKJBBCK_OFFSET))(this, a1);
		}

		::System::Void IODNKAMHCMA(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_IODNKAMHCMA_OFFSET))(this, a1);
		}

		::System::Void LJFEHKLPKJA(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::MVector3 a2, ::RPG::MQuaternion a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::MVector3, ::RPG::MQuaternion, ::System::Single))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_LJFEHKLPKJA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HLIBJCBCLLJ(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::MVector3 a3, ::RPG::MQuaternion a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MQuaternion, ::System::Single))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_HLIBJCBCLLJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::System::Object*>* CLPBEDKHGKG(::RPG::MVector3 a1, ::RPG::MQuaternion a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::RPG::MVector3, ::RPG::MQuaternion, ::System::Single))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_CLPBEDKHGKG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void COPPLGAFOKI(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_COPPLGAFOKI_OFFSET))(this, a1, a2);
		}

		::System::Void LABODAMKALC(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_LABODAMKALC_OFFSET))(this, a1, a2);
		}

		::System::Void LBCACKLNMHP(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_LBCACKLNMHP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EECLPFKGGDE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_EECLPFKGGDE_OFFSET))(this, a1, a2);
		}

		::System::Void IILBPDHMHHK(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_IILBPDHMHHK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::MVector3 OKECDBKGFJH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::HMGKNAKEHKO_NGNBEJLOCEL a3, ::HMGKNAKEHKO_NGNBEJLOCEL a4, ::System::Single a5)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::HMGKNAKEHKO_NGNBEJLOCEL, ::HMGKNAKEHKO_NGNBEJLOCEL, ::System::Single))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_OKECDBKGFJH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
