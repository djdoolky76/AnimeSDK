#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::IO { class Stream; }

#define OAHMMNKIOFD_BIKABOFADBP_1_OFFSET UNITYSDK_OFFSET(0x1CC5A5B0)
#define OAHMMNKIOFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC60450)
#define OAHMMNKIOFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC60070)
#define OAHMMNKIOFD_DCDDKNNINEB_1_OFFSET UNITYSDK_OFFSET(0x1CC5C600)

inline static constexpr unsigned int OAHMMNKIOFD_TypeDefinitionIndex = 43861;

	class OAHMMNKIOFD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_JNAMGBBBNII()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "OAHMMNKIOFD")->GetStaticField(0xF10);
		}

		// static const ::System::Object LIKDOPMKGCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHMMNKIOFD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAHMMNKIOFD_CCTOR_OFFSET))();
		}

		::System::Int32 BIKABOFADBP_1(::System::IO::Stream* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + OAHMMNKIOFD_BIKABOFADBP_1_OFFSET))(this, a1, a2);
		}

		::System::Void DCDDKNNINEB_1(::System::IO::Stream* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + OAHMMNKIOFD_DCDDKNNINEB_1_OFFSET))(this, a1, a2);
		}

	};
