#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDHKGAKNOEK;
namespace System { class Object; }

#define DDHKGAKNOEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E151E20)
#define DDHKGAKNOEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E151E50)
#define DDHKGAKNOEK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E151E60)

inline static constexpr unsigned int DDHKGAKNOEK___c_TypeDefinitionIndex = 28856;

	class DDHKGAKNOEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDHKGAKNOEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHKGAKNOEK___C_CTOR_OFFSET))(this);
		}

		::DDHKGAKNOEK* __cctor_b__23_0()
		{
			return ((::DDHKGAKNOEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHKGAKNOEK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
