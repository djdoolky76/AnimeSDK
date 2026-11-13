#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define DILFHFPBKAO_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x18EC8B00)
#define DILFHFPBKAO_CTOR_OFFSET UNITYSDK_OFFSET(0x18EC8A30)
#define DILFHFPBKAO_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x18EC8BC0)
#define DILFHFPBKAO_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x18EC8A40)

inline static constexpr unsigned int DILFHFPBKAO_TypeDefinitionIndex = 65929;

	class DILFHFPBKAO : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + DILFHFPBKAO_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DILFHFPBKAO_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DILFHFPBKAO_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DILFHFPBKAO_IDBHAGEDEIP_OFFSET))(this);
		}

	};
