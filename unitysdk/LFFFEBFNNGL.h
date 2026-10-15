#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFFFEBFNNGL;
namespace UnityEngine { class Transform; }

#define LFFFEBFNNGL_BFADFAELKLJ_OFFSET UNITYSDK_OFFSET(0xB669170)
#define LFFFEBFNNGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB669340)
#define LFFFEBFNNGL_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xB669350)

	class LFFFEBFNNGL : public ::System::Object
	{
	public:
		::UnityEngine::Transform* ILHILGNDLAJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFEBFNNGL_CTOR_OFFSET))(this);
		}

		static ::LFFFEBFNNGL* BFADFAELKLJ()
		{
			return ((::LFFFEBFNNGL*(*)())((::PBYTE)hIl2Cpp + LFFFEBFNNGL_BFADFAELKLJ_OFFSET))();
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFEBFNNGL_FFHNOMIDEDE_OFFSET))(this);
		}

	};
