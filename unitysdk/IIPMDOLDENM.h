#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COOONBGCCCM;
class IIPMDOLDENM;

#define IIPMDOLDENM_CLEAR_OFFSET UNITYSDK_OFFSET(0x16449450)
#define IIPMDOLDENM_CTOR_OFFSET UNITYSDK_OFFSET(0x164494C0)
#define IIPMDOLDENM_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x164494A0)
#define IIPMDOLDENM_GMFKAFLHKPG_OFFSET UNITYSDK_OFFSET(0x16449350)
#define IIPMDOLDENM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16449400)
#define IIPMDOLDENM_SET_MODEL_OFFSET UNITYSDK_OFFSET(0x164494B0)

inline static constexpr unsigned int IIPMDOLDENM_TypeDefinitionIndex = 80545;

	class IIPMDOLDENM : public ::System::Object
	{
	public:
		::COOONBGCCCM* _Model_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPMDOLDENM_CTOR_OFFSET))(this);
		}

		static ::IIPMDOLDENM* GMFKAFLHKPG(::COOONBGCCCM* a1)
		{
			return ((::IIPMDOLDENM*(*)(::COOONBGCCCM*))((::PBYTE)hIl2Cpp + IIPMDOLDENM_GMFKAFLHKPG_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPMDOLDENM_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::COOONBGCCCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + IIPMDOLDENM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::COOONBGCCCM* get_Model()
		{
			return ((::COOONBGCCCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPMDOLDENM_GET_MODEL_OFFSET))(this);
		}

		::System::Void set_Model(::COOONBGCCCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + IIPMDOLDENM_SET_MODEL_OFFSET))(this, a1);
		}

	};
