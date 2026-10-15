#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }

#define IMCPKODGAEO_HJIBPLKODPA_CTOR_OFFSET UNITYSDK_OFFSET(0x164D1A40)

inline static constexpr unsigned int IMCPKODGAEO_HJIBPLKODPA_TypeDefinitionIndex = 49005;

	class IMCPKODGAEO_HJIBPLKODPA : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* LNHHIOCIJNP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPKODGAEO_HJIBPLKODPA_CTOR_OFFSET))(this);
		}

	};
