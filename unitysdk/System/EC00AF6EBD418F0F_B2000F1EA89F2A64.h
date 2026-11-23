#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EC00AF6EBD418F0F_B2AE5BC6C5CB870F.h"
#include "unitysdk/System/Object.h"

namespace System { class EC00AF6EBD418F0F_F348FD2BD1FFC322; }
namespace System { class String; }

#define SYSTEM_EC00AF6EBD418F0F_B2000F1EA89F2A64__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System
{
	inline static constexpr unsigned int EC00AF6EBD418F0F_B2000F1EA89F2A64_TypeDefinitionIndex = 14848;

	class EC00AF6EBD418F0F_B2000F1EA89F2A64 : public ::System::Object
	{
	public:
		::System::String* AEFE9D3C411C7F79; // 0x10
		::System::String* EE2C5EB6E0AE0693; // 0x18
		::System::String* EF58867DAA7F4547; // 0x20
		::System::EC00AF6EBD418F0F_B2AE5BC6C5CB870F A8FA03AB120F3647; // 0x28
		::System::String* FD25463BBBB00A7B; // 0x38
		::System::EC00AF6EBD418F0F_F348FD2BD1FFC322* E473077DB483AFAE; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EC00AF6EBD418F0F_B2000F1EA89F2A64__CTOR_OFFSET))(this);
		}
	};
}
