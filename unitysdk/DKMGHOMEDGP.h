#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALFGDDOFIIJ;

#define DKMGHOMEDGP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBF21E0)
#define DKMGHOMEDGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF2260)

inline static constexpr unsigned int DKMGHOMEDGP_TypeDefinitionIndex = 44380;

	class DKMGHOMEDGP : public ::System::Object
	{
	public:
		::ALFGDDOFIIJ* DINALMACJAG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMGHOMEDGP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMGHOMEDGP_CLEAR_OFFSET))(this);
		}

	};
