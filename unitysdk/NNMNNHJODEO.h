#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define NNMNNHJODEO_CAKDCLPELPI_OFFSET UNITYSDK_OFFSET(0xE770FB0)
#define NNMNNHJODEO_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0xE770A10)
#define NNMNNHJODEO_HHLLJBNCCNL_1_OFFSET UNITYSDK_OFFSET(0xE771550)
#define NNMNNHJODEO_HHLLJBNCCNL_OFFSET UNITYSDK_OFFSET(0xE771280)
#define NNMNNHJODEO_LHBPKGPAMJI_1_OFFSET UNITYSDK_OFFSET(0xE771300)
#define NNMNNHJODEO_LHBPKGPAMJI_OFFSET UNITYSDK_OFFSET(0xE7711F0)
#define NNMNNHJODEO_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0xE771160)
#define NNMNNHJODEO__CTOR_OFFSET UNITYSDK_OFFSET(0xE770A00)

inline static constexpr unsigned int NNMNNHJODEO_TypeDefinitionIndex = 48635;

class NNMNNHJODEO
{
public:
	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + NNMNNHJODEO__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + NNMNNHJODEO_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	static ::MoleMole::Battle::Entity* CAKDCLPELPI(::System::Int32 LBPBANPFBHE)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NNMNNHJODEO_CAKDCLPELPI_OFFSET))(LBPBANPFBHE);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + NNMNNHJODEO_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid LHBPKGPAMJI(::System::String* BDEEGKPMMBO, ::System::Int32 LBPBANPFBHE, ::System::Int32 JOFGIANGHMK, ::System::Boolean GDNECMBHKND)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NNMNNHJODEO_LHBPKGPAMJI_OFFSET))(BDEEGKPMMBO, LBPBANPFBHE, JOFGIANGHMK, GDNECMBHKND);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid HHLLJBNCCNL(::System::Int32 JOFGIANGHMK, ::System::Boolean GDNECMBHKND)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NNMNNHJODEO_HHLLJBNCCNL_OFFSET))(JOFGIANGHMK, GDNECMBHKND);
	}

	::System::Void LHBPKGPAMJI_1(::System::String* BDEEGKPMMBO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNMNNHJODEO_LHBPKGPAMJI_1_OFFSET))(this, BDEEGKPMMBO);
	}

	::System::Void HHLLJBNCCNL_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMNNHJODEO_HHLLJBNCCNL_1_OFFSET))(this);
	}
};
