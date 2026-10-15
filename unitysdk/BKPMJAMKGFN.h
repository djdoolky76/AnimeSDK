#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define BKPMJAMKGFN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA65780)
#define BKPMJAMKGFN_PMMNBAJPPKG_OFFSET UNITYSDK_OFFSET(0xBA65790)

inline static constexpr unsigned int BKPMJAMKGFN_TypeDefinitionIndex = 73494;

	class BKPMJAMKGFN : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_LKHLJJDOLJC()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "BKPMJAMKGFN")->GetStaticField(0x159F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKPMJAMKGFN_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 PMMNBAJPPKG(::System::Object* a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Object*))((::PBYTE)hIl2Cpp + BKPMJAMKGFN_PMMNBAJPPKG_OFFSET))(a1);
		}

	};
