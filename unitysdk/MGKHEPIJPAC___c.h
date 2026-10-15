#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGKHEPIJPAC;
namespace System { class Object; }

#define MGKHEPIJPAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F9D10)
#define MGKHEPIJPAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F9D50)
#define MGKHEPIJPAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9F9D60)

inline static constexpr unsigned int MGKHEPIJPAC___c_TypeDefinitionIndex = 30017;

	class MGKHEPIJPAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x502F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKHEPIJPAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC___C_CTOR_OFFSET))(this);
		}

		::MGKHEPIJPAC* __cctor_b__33_0()
		{
			return ((::MGKHEPIJPAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
