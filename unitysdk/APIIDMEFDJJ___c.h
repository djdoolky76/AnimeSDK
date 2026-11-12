#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APIIDMEFDJJ;
namespace System { class Object; }

#define APIIDMEFDJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA635F0)
#define APIIDMEFDJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA63630)
#define APIIDMEFDJJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA63640)

inline static constexpr unsigned int APIIDMEFDJJ___c_TypeDefinitionIndex = 32129;

	class APIIDMEFDJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E0B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APIIDMEFDJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ___C_CTOR_OFFSET))(this);
		}

		::APIIDMEFDJJ* __cctor_b__33_0()
		{
			return ((::APIIDMEFDJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
