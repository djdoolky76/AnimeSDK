#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class Mesh; }

#define ENGOPHNEPNF_ADMHDBODEHI_OFFSET UNITYSDK_OFFSET(0x155AED00)
#define ENGOPHNEPNF_BNPAOJKMDCM_OFFSET UNITYSDK_OFFSET(0x155AFB10)
#define ENGOPHNEPNF_CJPAMGDBNLC_OFFSET UNITYSDK_OFFSET(0x155ADD00)
#define ENGOPHNEPNF_EKMJKHOHCKM_OFFSET UNITYSDK_OFFSET(0x155AD9C0)
#define ENGOPHNEPNF_HCCNOOIADOE_OFFSET UNITYSDK_OFFSET(0x155AFA60)
#define ENGOPHNEPNF_JPKIKKPCAOJ_OFFSET UNITYSDK_OFFSET(0x155ADAB0)
#define ENGOPHNEPNF_KPOCEPGLHGB_OFFSET UNITYSDK_OFFSET(0x155AF920)
#define ENGOPHNEPNF_LGFAIJFAGIC_OFFSET UNITYSDK_OFFSET(0x155ADBF0)
#define ENGOPHNEPNF_PCLBLEOGKDI_OFFSET UNITYSDK_OFFSET(0x155AF9F0)

	class ENGOPHNEPNF : public ::System::Object
	{
	public:
		// static const ::System::Object KMPLJCDCMFL; // 0x0
		static ::UnityEngine::Mesh* EKMJKHOHCKM(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENGOPHNEPNF_EKMJKHOHCKM_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::Mesh* LGFAIJFAGIC(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENGOPHNEPNF_LGFAIJFAGIC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Mesh* CJPAMGDBNLC(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::UnityEngine::Vector2 a8)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ENGOPHNEPNF_CJPAMGDBNLC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::Mesh* ADMHDBODEHI(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::UnityEngine::Vector2 a7)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ENGOPHNEPNF_ADMHDBODEHI_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::Mesh* JPKIKKPCAOJ(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::UnityEngine::Vector2 a8, ::System::Boolean a9)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + ENGOPHNEPNF_JPKIKKPCAOJ_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Int32 KPOCEPGLHGB(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENGOPHNEPNF_KPOCEPGLHGB_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 PCLBLEOGKDI(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENGOPHNEPNF_PCLBLEOGKDI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 HCCNOOIADOE()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ENGOPHNEPNF_HCCNOOIADOE_OFFSET))();
		}

		static ::System::Int32 BNPAOJKMDCM()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ENGOPHNEPNF_BNPAOJKMDCM_OFFSET))();
		}

	};
