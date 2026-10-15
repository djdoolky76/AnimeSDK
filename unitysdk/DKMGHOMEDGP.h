#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALFGDDOFIIJ;

#define DKMGHOMEDGP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA2E9B0)
#define DKMGHOMEDGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2EA30)

inline static constexpr unsigned int DKMGHOMEDGP_TypeDefinitionIndex = 43399;

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
