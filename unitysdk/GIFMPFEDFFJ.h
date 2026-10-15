#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBAJLKHNLHH.h"
namespace UnityEngine { class Animation; }

#define GIFMPFEDFFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A29630)
#define GIFMPFEDFFJ_MPGLJNHHKDF_OFFSET UNITYSDK_OFFSET(0x15A295B0)
#define GIFMPFEDFFJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x15A29550)

inline static constexpr unsigned int GIFMPFEDFFJ_TypeDefinitionIndex = 71816;

	class GIFMPFEDFFJ : public ::FBAJLKHNLHH
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* IIFENECAOBG; // 0x0
		// static const ::System::String* CGNGHKIIGCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFMPFEDFFJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFMPFEDFFJ__ONBIND_OFFSET))(this);
		}

		::System::Void MPGLJNHHKDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFMPFEDFFJ_MPGLJNHHKDF_OFFSET))(this);
		}

	};
