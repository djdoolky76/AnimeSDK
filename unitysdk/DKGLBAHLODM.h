#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DecalPuzzleStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define DKGLBAHLODM_CCTOR_OFFSET UNITYSDK_OFFSET(0xF87B6F0)
#define DKGLBAHLODM_CTOR_OFFSET UNITYSDK_OFFSET(0xF87B0A0)
#define DKGLBAHLODM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF87B0D0)

inline static constexpr unsigned int DKGLBAHLODM_TypeDefinitionIndex = 52731;

	class DKGLBAHLODM
	{
	public:
		static ::System::String** StaticGet_IOHHOGLHHCF()
		{
			return (::System::String**)UnitySDK::FromName("", "DKGLBAHLODM")->GetStaticField(0x59AE0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DecalPuzzleStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DecalPuzzleStart*))((::PBYTE)hIl2Cpp + DKGLBAHLODM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKGLBAHLODM_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKGLBAHLODM_ONTASKBEGIN_OFFSET))(this);
		}

	};
