#pragma once
#include "unitysdk/unitysdk.h"
class SerializedWarmupPSO;

	struct alignas(8) EIEBEHJKOAG_PSODownloadResponse_Result
	{
		::Il2CppArray<::SerializedWarmupPSO*>* aggregated_psos_report; // 0x10
		::System::Int32 count; // 0x18
	};
