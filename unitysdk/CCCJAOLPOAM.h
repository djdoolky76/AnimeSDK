#pragma once
#include "unitysdk/unitysdk.h"
class CKHFKFPPANI;
class GHMGGIHEHJE;
class LJAIOGHEIBA;
class NAJMEPONCEL;
class NLJPKPAIILH;

#define CCCJAOLPOAM_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x94F0)
#define CCCJAOLPOAM_GET_ENGINE_OFFSET UNITYSDK_OFFSET(0x1D40)
#define CCCJAOLPOAM_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1D30)
#define CCCJAOLPOAM_GET_PHYSICS_OFFSET UNITYSDK_OFFSET(0xAD00)
#define CCCJAOLPOAM_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x94D0)
#define CCCJAOLPOAM_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xE1F90)
#define CCCJAOLPOAM_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0xE1FA0)
#define CCCJAOLPOAM_SET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x9500)
#define CCCJAOLPOAM_SET_ENGINE_OFFSET UNITYSDK_OFFSET(0x94C0)
#define CCCJAOLPOAM_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x94B0)
#define CCCJAOLPOAM_SET_PHYSICS_OFFSET UNITYSDK_OFFSET(0xAD10)
#define CCCJAOLPOAM_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x94E0)

inline static constexpr unsigned int CCCJAOLPOAM_TypeDefinitionIndex = 75937;

	struct alignas(8) CCCJAOLPOAM
	{
		::GHMGGIHEHJE* _Entity_k__BackingField; // 0x10
		::NAJMEPONCEL* _Engine_k__BackingField; // 0x18
		::CKHFKFPPANI* _Transform_k__BackingField; // 0x20
		::NLJPKPAIILH* _Collider_k__BackingField; // 0x28
		::LJAIOGHEIBA* _Physics_k__BackingField; // 0x30
		::GHMGGIHEHJE* get_Entity()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_SET_ENTITY_OFFSET))(this, a1);
		}

		::NAJMEPONCEL* get_Engine()
		{
			return ((::NAJMEPONCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_GET_ENGINE_OFFSET))(this);
		}

		::System::Void set_Engine(::NAJMEPONCEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAJMEPONCEL*))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_SET_ENGINE_OFFSET))(this, a1);
		}

		::CKHFKFPPANI* get_Transform()
		{
			return ((::CKHFKFPPANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_Transform(::CKHFKFPPANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKHFKFPPANI*))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::NLJPKPAIILH* get_Collider()
		{
			return ((::NLJPKPAIILH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_GET_COLLIDER_OFFSET))(this);
		}

		::System::Void set_Collider(::NLJPKPAIILH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLJPKPAIILH*))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_SET_COLLIDER_OFFSET))(this, a1);
		}

		::LJAIOGHEIBA* get_Physics()
		{
			return ((::LJAIOGHEIBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_GET_PHYSICS_OFFSET))(this);
		}

		::System::Void set_Physics(::LJAIOGHEIBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJAIOGHEIBA*))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_SET_PHYSICS_OFFSET))(this, a1);
		}

		::System::Void JDEKJLHMPLG(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void PINOKCNDANM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCJAOLPOAM_PINOKCNDANM_OFFSET))(this);
		}

	};
