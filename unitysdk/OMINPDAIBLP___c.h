#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMINPDAIBLP;
namespace System { class Object; }

#define OMINPDAIBLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB6D40)
#define OMINPDAIBLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB6D80)
#define OMINPDAIBLP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEB6D90)

inline static constexpr unsigned int OMINPDAIBLP___c_TypeDefinitionIndex = 29339;

	class OMINPDAIBLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMINPDAIBLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINPDAIBLP___C_CTOR_OFFSET))(this);
		}

		::OMINPDAIBLP* __cctor_b__23_0()
		{
			return ((::OMINPDAIBLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINPDAIBLP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
