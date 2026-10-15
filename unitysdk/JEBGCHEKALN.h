#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHDHPABKGPB.h"
namespace UnityEngine { class Transform; }

#define JEBGCHEKALN_CTOR_OFFSET UNITYSDK_OFFSET(0x16618BE0)
#define JEBGCHEKALN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16618C50)

	class JEBGCHEKALN : public ::IHDHPABKGPB
	{
	public:
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEBGCHEKALN_CTOR_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGCHEKALN_JLANKNHFKCN_OFFSET))(this);
		}

	};
