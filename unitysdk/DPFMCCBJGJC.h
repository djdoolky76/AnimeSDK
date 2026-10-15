#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class DPFMCCBJGJC;
class FCOEMCEDLNL;
class MKLDKDBBDKB;
namespace System { class String; }

#define DPFMCCBJGJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD56010)
#define DPFMCCBJGJC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD56050)
#define DPFMCCBJGJC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD55FA0)

inline static constexpr unsigned int DPFMCCBJGJC_TypeDefinitionIndex = 20130;

	class DPFMCCBJGJC : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::Il2CppArray<::MKLDKDBBDKB*>* HEBOJJJAHEE; // 0x18
		::System::String* ANNDPINHNML; // 0x20
		::System::Single MBPCNEOIKIC; // 0x28
		::System::Single NJIGKOHDINP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFMCCBJGJC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DPFMCCBJGJC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPFMCCBJGJC*))((::PBYTE)hIl2Cpp + DPFMCCBJGJC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DPFMCCBJGJC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPFMCCBJGJC*))((::PBYTE)hIl2Cpp + DPFMCCBJGJC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
