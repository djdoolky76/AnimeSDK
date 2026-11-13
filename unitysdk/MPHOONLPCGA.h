#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMNHKCPIGDD.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define MPHOONLPCGA_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x3E71B60)

inline static constexpr unsigned int MPHOONLPCGA_TypeDefinitionIndex = 58902;

	struct alignas(4) MPHOONLPCGA
	{
		::System::Int32 DKJFDABPLCO; // 0x10
		::MMNHKCPIGDD FKCKKFALPBK; // 0x14
		::RPG::GameCore::FixPoint AJHHCOHFIFA; // 0x18
		::System::Void PKADDEPKJFN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MPHOONLPCGA_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
