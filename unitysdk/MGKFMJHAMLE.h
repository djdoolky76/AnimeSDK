#pragma once
#include "unitysdk/unitysdk.h"
class EPDGBMGOPHM;
class FBGHLFHPPON;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MGKFMJHAMLE_CTOR_OFFSET UNITYSDK_OFFSET(0xC1D9360)
#define MGKFMJHAMLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1D93E0)
#define MGKFMJHAMLE_IGLKCNNAAFB_OFFSET UNITYSDK_OFFSET(0xC1D9490)
#define MGKFMJHAMLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1D9420)

inline static constexpr unsigned int MGKFMJHAMLE_TypeDefinitionIndex = 55000;

	class MGKFMJHAMLE
	{
	public:
		::EPDGBMGOPHM* OHKCFMOAECF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FBGHLFHPPON* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FBGHLFHPPON*))((::PBYTE)hIl2Cpp + MGKFMJHAMLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKFMJHAMLE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKFMJHAMLE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::String* IGLKCNNAAFB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKFMJHAMLE_IGLKCNNAAFB_OFFSET))(this);
		}

	};
