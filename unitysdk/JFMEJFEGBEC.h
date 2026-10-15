#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JFMEJFEGBEC;
namespace RPG::GameCore { class FateRinCaseBoardSimpleTalkData; }

#define JFMEJFEGBEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D027590)
#define JFMEJFEGBEC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0275A0)
#define JFMEJFEGBEC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D027560)

inline static constexpr unsigned int JFMEJFEGBEC_TypeDefinitionIndex = 19933;

	class JFMEJFEGBEC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardSimpleTalkData*>* BGBEEAPJGPI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMEJFEGBEC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JFMEJFEGBEC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFMEJFEGBEC*))((::PBYTE)hIl2Cpp + JFMEJFEGBEC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JFMEJFEGBEC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFMEJFEGBEC*))((::PBYTE)hIl2Cpp + JFMEJFEGBEC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
