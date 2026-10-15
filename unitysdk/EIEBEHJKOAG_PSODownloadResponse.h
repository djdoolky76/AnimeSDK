#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIEBEHJKOAG_PSODownloadResponse_Result.h"
#include "unitysdk/EIEBEHJKOAG_PSODownloadResponse_Status.h"
#include "unitysdk/System/Object.h"

#define EIEBEHJKOAG_PSODOWNLOADRESPONSE_CTOR_OFFSET UNITYSDK_OFFSET(0x154B5540)

inline static constexpr unsigned int EIEBEHJKOAG_PSODownloadResponse_TypeDefinitionIndex = 47408;

	class EIEBEHJKOAG_PSODownloadResponse : public ::System::Object
	{
	public:
		::EIEBEHJKOAG_PSODownloadResponse_Status status; // 0x10
		::EIEBEHJKOAG_PSODownloadResponse_Result result; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_PSODOWNLOADRESPONSE_CTOR_OFFSET))(this);
		}

	};
