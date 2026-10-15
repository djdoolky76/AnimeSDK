#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGANCPOAIIP.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MBBPMEANHCL;

#define MBBPMEANHCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D104970)
#define MBBPMEANHCL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1047E0)

inline static constexpr unsigned int MBBPMEANHCL_TypeDefinitionIndex = 11974;

	class MBBPMEANHCL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::OGANCPOAIIP GMPGDEINODK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBPMEANHCL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MBBPMEANHCL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MBBPMEANHCL*))((::PBYTE)hIl2Cpp + MBBPMEANHCL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
