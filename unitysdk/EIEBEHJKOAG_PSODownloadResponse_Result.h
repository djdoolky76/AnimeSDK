#pragma once
#include "unitysdk/unitysdk.h"
class SerializedWarmupPSO;

inline static constexpr unsigned int EIEBEHJKOAG_PSODownloadResponse_Result_TypeDefinitionIndex = 47410;

	struct alignas(8) EIEBEHJKOAG_PSODownloadResponse_Result
	{
		::Il2CppArray<::SerializedWarmupPSO*>* aggregated_psos_report; // 0x10
		::System::Int32 count; // 0x18
	};
