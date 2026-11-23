#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A005C8BDA4944777;
namespace System { class Object; }

#define AF5FBA80BA4AF1CC_B5F78E5A83C7D3DC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define AF5FBA80BA4AF1CC_B5F78E5A83C7D3DC__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

namespace AF5FBA80BA4AF1CC
{
	inline static constexpr unsigned int B5F78E5A83C7D3DC_TypeDefinitionIndex = 14962;

	class B5F78E5A83C7D3DC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AF5FBA80BA4AF1CC_B5F78E5A83C7D3DC__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 A3C4473BC2C13CFA, ::A005C8BDA4944777* E218591ED7A50A79)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::A005C8BDA4944777*))((::PBYTE)hIl2Cpp + AF5FBA80BA4AF1CC_B5F78E5A83C7D3DC_INVOKE_OFFSET))(this, A3C4473BC2C13CFA, E218591ED7A50A79);
		}
	};
}
