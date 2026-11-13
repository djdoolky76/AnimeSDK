#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGJCAPACHMJ;
namespace System { class Object; }

#define EGJCAPACHMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2049C820)
#define EGJCAPACHMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2049C860)
#define EGJCAPACHMJ___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x2049C870)

inline static constexpr unsigned int EGJCAPACHMJ___c_TypeDefinitionIndex = 26746;

	class EGJCAPACHMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJCAPACHMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCAPACHMJ___C_CTOR_OFFSET))(this);
		}

		::EGJCAPACHMJ* __cctor_b__53_0()
		{
			return ((::EGJCAPACHMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCAPACHMJ___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
