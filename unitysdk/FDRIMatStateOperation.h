#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CustomDataPos.h"
#include "unitysdk/FDRIStateOperation.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define FDRIMATSTATEOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x156E4490)
#define FDRIMATSTATEOPERATION_IJCPIKBPLOP_OFFSET UNITYSDK_OFFSET(0x156E4410)

	class FDRIMatStateOperation : public ::FDRIStateOperation
	{
	public:
		::CustomDataPos customDataPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIMATSTATEOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void IJCPIKBPLOP(::UnityEngine::Vector4 a1, ::CustomDataPos a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4, ::CustomDataPos, ::System::UInt32))((::PBYTE)hIl2Cpp + FDRIMATSTATEOPERATION_IJCPIKBPLOP_OFFSET))(a1, a2, a3);
		}

	};
