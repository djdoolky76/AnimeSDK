#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NIIGMOENOGN_CTOR_OFFSET UNITYSDK_OFFSET(0xBBE6270)
#define NIIGMOENOGN_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0xBBE6170)
#define NIIGMOENOGN_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBBE60D0)
#define NIIGMOENOGN_LFKJJELMNPK_OFFSET UNITYSDK_OFFSET(0xBBE6120)
#define NIIGMOENOGN_OECIHKHGCFD_1_OFFSET UNITYSDK_OFFSET(0xBBE6220)
#define NIIGMOENOGN_OECIHKHGCFD_OFFSET UNITYSDK_OFFSET(0xBBE61D0)

inline static constexpr unsigned int NIIGMOENOGN_TypeDefinitionIndex = 70237;

	class NIIGMOENOGN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIGMOENOGN_CTOR_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NIIGMOENOGN_ELEPDOMDAGA_OFFSET))(this, a1);
		}

		::System::Void LFKJJELMNPK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NIIGMOENOGN_LFKJJELMNPK_OFFSET))(this, a1);
		}

		::System::Void DCADIANHPFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NIIGMOENOGN_DCADIANHPFD_OFFSET))(this, a1);
		}

		::System::Void OECIHKHGCFD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NIIGMOENOGN_OECIHKHGCFD_OFFSET))(this, a1);
		}

		::System::Void OECIHKHGCFD_1(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NIIGMOENOGN_OECIHKHGCFD_1_OFFSET))(this, a1, a2);
		}

	};
