#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIOFNHHMCNJ_GFDPOGNEHLF_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB9CE90)

inline static constexpr unsigned int PIOFNHHMCNJ_GFDPOGNEHLF_TypeDefinitionIndex = 71829;

	class PIOFNHHMCNJ_GFDPOGNEHLF : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_FEPKBEAPALG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GFDPOGNEHLF")->GetStaticField(0x15EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOFNHHMCNJ_GFDPOGNEHLF_CCTOR_OFFSET))();
		}

	};
