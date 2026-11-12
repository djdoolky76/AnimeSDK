#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HABHJADBJAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CEA50)

inline static constexpr unsigned int HABHJADBJAC_TypeDefinitionIndex = 38095;

	class HABHJADBJAC : public ::System::Object
	{
	public:
		::System::Double KMEEEFHANBE; // 0x10
		::System::Int32 FINHAKENMLD; // 0x18
		::System::Int32 EJBAIBHBJPP; // 0x1C
		::System::Int32 MFCBJINIDDI; // 0x20
		::System::Int32 BBFENNFGLHP; // 0x24
		::System::Int32 AHAIKCIPHCG; // 0x28
		::System::Int32 OMDMEDDJBEN; // 0x2C
		::System::Double HLLKBPLHNJJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABHJADBJAC_CTOR_OFFSET))(this);
		}

	};
