#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDFEGFPLNHN;
namespace System { class Object; }

#define PDFEGFPLNHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1D9420)
#define PDFEGFPLNHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D9450)
#define PDFEGFPLNHN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1D9460)

inline static constexpr unsigned int PDFEGFPLNHN___c_TypeDefinitionIndex = 30521;

	class PDFEGFPLNHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDFEGFPLNHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN___C_CTOR_OFFSET))(this);
		}

		::PDFEGFPLNHN* __cctor_b__28_0()
		{
			return ((::PDFEGFPLNHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
