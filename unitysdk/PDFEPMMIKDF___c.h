#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDFEPMMIKDF;
namespace System { class Object; }

#define PDFEPMMIKDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE0D80)
#define PDFEPMMIKDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE0DB0)
#define PDFEPMMIKDF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEE0DC0)

inline static constexpr unsigned int PDFEPMMIKDF___c_TypeDefinitionIndex = 31549;

	class PDFEPMMIKDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDFEPMMIKDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF___C_CTOR_OFFSET))(this);
		}

		::PDFEPMMIKDF* __cctor_b__33_0()
		{
			return ((::PDFEPMMIKDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
