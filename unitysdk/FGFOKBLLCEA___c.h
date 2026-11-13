#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGFOKBLLCEA;
namespace System { class Object; }

#define FGFOKBLLCEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C2060)
#define FGFOKBLLCEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C20A0)
#define FGFOKBLLCEA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8C20B0)

inline static constexpr unsigned int FGFOKBLLCEA___c_TypeDefinitionIndex = 32449;

	class FGFOKBLLCEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGFOKBLLCEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA___C_CTOR_OFFSET))(this);
		}

		::FGFOKBLLCEA* __cctor_b__23_0()
		{
			return ((::FGFOKBLLCEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
