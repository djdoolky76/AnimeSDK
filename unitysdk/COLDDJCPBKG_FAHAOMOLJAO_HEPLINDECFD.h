#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraDuelBuffDisplayConfig; }
namespace System { class String; }

#define COLDDJCPBKG_FAHAOMOLJAO_HEPLINDECFD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBAE80)

inline static constexpr unsigned int COLDDJCPBKG_FAHAOMOLJAO_HEPLINDECFD_TypeDefinitionIndex = 77458;

	class COLDDJCPBKG_FAHAOMOLJAO_HEPLINDECFD : public ::System::Object
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x10
		::RPG::GameCore::ChimeraDuelBuffDisplayConfig* EHPIGHAFEMN; // 0x18
		::Il2CppArray<::System::Int32>* HPGOFLEEEFD; // 0x20
		::System::Int32 MCLLALGABAB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLDDJCPBKG_FAHAOMOLJAO_HEPLINDECFD_CTOR_OFFSET))(this);
		}

	};
