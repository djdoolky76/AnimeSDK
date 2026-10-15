#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLCJPINDIAC;
namespace System { class Object; }

#define DLCJPINDIAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E01C0)
#define DLCJPINDIAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0200)
#define DLCJPINDIAC___C___CCTOR_B__50_0_OFFSET UNITYSDK_OFFSET(0x1E1E0210)

inline static constexpr unsigned int DLCJPINDIAC___c_TypeDefinitionIndex = 31303;

	class DLCJPINDIAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLCJPINDIAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCJPINDIAC___C_CTOR_OFFSET))(this);
		}

		::DLCJPINDIAC* __cctor_b__50_0()
		{
			return ((::DLCJPINDIAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCJPINDIAC___C___CCTOR_B__50_0_OFFSET))(this);
		}

	};
