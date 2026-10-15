#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class IHGIENOHBMJ;
namespace System { class String; }

#define HKNBPHAJEJF_CTOR_OFFSET UNITYSDK_OFFSET(0x15D43B70)
#define HKNBPHAJEJF_EOKOICFAPOO_OFFSET UNITYSDK_OFFSET(0x15D43930)
#define HKNBPHAJEJF_FADJMGBAJHL_OFFSET UNITYSDK_OFFSET(0x15D43980)

inline static constexpr unsigned int HKNBPHAJEJF_TypeDefinitionIndex = 59313;

	class HKNBPHAJEJF : public ::System::Object
	{
	public:
		::System::String* RetMessage; // 0x10
		::System::Int32 RetCode; // 0x18
		// static const ::System::Object LMKLBNBJENJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBPHAJEJF_CTOR_OFFSET))(this);
		}

		::System::Boolean EOKOICFAPOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBPHAJEJF_EOKOICFAPOO_OFFSET))(this);
		}

		::System::Void FADJMGBAJHL(::GHHJNCOAIJF* a1, ::IHGIENOHBMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF*, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + HKNBPHAJEJF_FADJMGBAJHL_OFFSET))(this, a1, a2);
		}

	};
