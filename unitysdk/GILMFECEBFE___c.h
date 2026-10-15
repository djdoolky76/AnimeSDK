#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GILMFECEBFE;
namespace System { class Object; }

#define GILMFECEBFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A0470)
#define GILMFECEBFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A04B0)
#define GILMFECEBFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4A04C0)

inline static constexpr unsigned int GILMFECEBFE___c_TypeDefinitionIndex = 29291;

	class GILMFECEBFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GILMFECEBFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE___C_CTOR_OFFSET))(this);
		}

		::GILMFECEBFE* __cctor_b__28_0()
		{
			return ((::GILMFECEBFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
