#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CEPPOLNIMIA_MCIPLCBOOCI_OFFSET UNITYSDK_OFFSET(0x128EB900)
#define CEPPOLNIMIA_MFHFMFFMCCE_OFFSET UNITYSDK_OFFSET(0x128EB970)
#define CEPPOLNIMIA_NHKJPMJGCKN_OFFSET UNITYSDK_OFFSET(0x128EBA20)
#define CEPPOLNIMIA__CTOR_OFFSET UNITYSDK_OFFSET(0x128EB8F0)

inline static constexpr unsigned int CEPPOLNIMIA_TypeDefinitionIndex = 60728;

class CEPPOLNIMIA : public ::System::Object
{
public:
	::System::String* KLBCMPMDDLD; // 0x10
	::UnityEngine::Animation* EEFOCCNFJCO; // 0x18
	::System::String* IOLFNMNLDLJ; // 0x20

	::System::Void _ctor(::UnityEngine::Animation* AOKJEGNBALI, ::System::String* MFNEFOBBBCL, ::System::String* CLIAFAFFMEJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CEPPOLNIMIA__CTOR_OFFSET))(this, AOKJEGNBALI, MFNEFOBBBCL, CLIAFAFFMEJ);
	}

	::System::Void MCIPLCBOOCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPPOLNIMIA_MCIPLCBOOCI_OFFSET))(this);
	}

	::System::Void NHKJPMJGCKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPPOLNIMIA_NHKJPMJGCKN_OFFSET))(this);
	}

	::System::Void MFHFMFFMCCE(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEPPOLNIMIA_MFHFMFFMCCE_OFFSET))(this, MCOHLHMKLIP);
	}
};
