#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJDIAHDLCNJ;
namespace System { class Object; }

#define CJDIAHDLCNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DC570)
#define CJDIAHDLCNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DC5B0)
#define CJDIAHDLCNJ___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E0DC5C0)

inline static constexpr unsigned int CJDIAHDLCNJ___c_TypeDefinitionIndex = 25332;

	class CJDIAHDLCNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x190A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJDIAHDLCNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDIAHDLCNJ___C_CTOR_OFFSET))(this);
		}

		::CJDIAHDLCNJ* __cctor_b__63_0()
		{
			return ((::CJDIAHDLCNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDIAHDLCNJ___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
