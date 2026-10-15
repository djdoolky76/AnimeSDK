#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLNDGLGCJCG;
class NDNBAKIOMIC;

#define JLNDGLGCJCG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB251120)
#define JLNDGLGCJCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB2511A0)
#define JLNDGLGCJCG_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0xB251100)
#define JLNDGLGCJCG_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0xB251110)

	class JLNDGLGCJCG : public ::System::Object
	{
	public:
		::NDNBAKIOMIC* _Params_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNDGLGCJCG_CTOR_OFFSET))(this);
		}

		::NDNBAKIOMIC* get_Params()
		{
			return ((::NDNBAKIOMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNDGLGCJCG_GET_PARAMS_OFFSET))(this);
		}

		::System::Void set_Params(::NDNBAKIOMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDNBAKIOMIC*))((::PBYTE)hIl2Cpp + JLNDGLGCJCG_SET_PARAMS_OFFSET))(this, a1);
		}

		static ::JLNDGLGCJCG* BPLPBPMEODA(::NDNBAKIOMIC* a1)
		{
			return ((::JLNDGLGCJCG*(*)(::NDNBAKIOMIC*))((::PBYTE)hIl2Cpp + JLNDGLGCJCG_BPLPBPMEODA_OFFSET))(a1);
		}

	};
