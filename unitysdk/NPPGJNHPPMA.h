#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class JNHEPGLMAFE;

#define NPPGJNHPPMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CA250)
#define NPPGJNHPPMA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C7CA270)

	class NPPGJNHPPMA : public ::System::Object
	{
	public:
		::JNHEPGLMAFE* PDENFEFCAGN; // 0x10
		::RPG::MVector3 NMGOJMADLOH; // 0x18
		::System::Int32 KKHNLKAKJGB; // 0x24
		::System::Int32 AJCODAIHEDA; // 0x28
		::System::Void _ctor(::JNHEPGLMAFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNHEPGLMAFE*))((::PBYTE)hIl2Cpp + NPPGJNHPPMA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPGJNHPPMA_EXECUTE_OFFSET))(this);
		}

	};
