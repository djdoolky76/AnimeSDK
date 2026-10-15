#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCKGCOJLJMK;

#define GGGOOHNIBNN_CTOR_OFFSET UNITYSDK_OFFSET(0x159F8D30)
#define GGGOOHNIBNN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x159F8CE0)

inline static constexpr unsigned int GGGOOHNIBNN_TypeDefinitionIndex = 76933;

	class GGGOOHNIBNN : public ::System::Object
	{
	public:
		::HCKGCOJLJMK* CBIGPGKJAEI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGOOHNIBNN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HCKGCOJLJMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCKGCOJLJMK*))((::PBYTE)hIl2Cpp + GGGOOHNIBNN_KPJGDHLENIP_OFFSET))(this, a1);
		}

	};
