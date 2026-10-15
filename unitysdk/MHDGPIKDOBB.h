#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MHDGPIKDOBB_DJDICILNBEF_OFFSET UNITYSDK_OFFSET(0x1DD72240)

	class MHDGPIKDOBB : public ::System::Object
	{
	public:
		static ::System::Void DJDICILNBEF(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MHDGPIKDOBB_DJDICILNBEF_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
