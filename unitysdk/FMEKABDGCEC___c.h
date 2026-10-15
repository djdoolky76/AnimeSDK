#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMEKABDGCEC;
namespace System { class Object; }

#define FMEKABDGCEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E1980)
#define FMEKABDGCEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E19C0)
#define FMEKABDGCEC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3E19D0)

inline static constexpr unsigned int FMEKABDGCEC___c_TypeDefinitionIndex = 25623;

	class FMEKABDGCEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMEKABDGCEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEKABDGCEC___C_CTOR_OFFSET))(this);
		}

		::FMEKABDGCEC* __cctor_b__28_0()
		{
			return ((::FMEKABDGCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEKABDGCEC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
