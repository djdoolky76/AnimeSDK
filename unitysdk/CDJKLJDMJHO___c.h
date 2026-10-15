#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDJKLJDMJHO;
namespace System { class Object; }

#define CDJKLJDMJHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E059280)
#define CDJKLJDMJHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0592C0)
#define CDJKLJDMJHO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0592D0)

inline static constexpr unsigned int CDJKLJDMJHO___c_TypeDefinitionIndex = 30666;

	class CDJKLJDMJHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDJKLJDMJHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO___C_CTOR_OFFSET))(this);
		}

		::CDJKLJDMJHO* __cctor_b__28_0()
		{
			return ((::CDJKLJDMJHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
