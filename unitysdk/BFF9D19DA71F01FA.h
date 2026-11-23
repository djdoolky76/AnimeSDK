#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkRoom;
class AkRoomPortal;
class AkSurfaceReflector;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFF9D19DA71F01FA_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x291D590)
#define BFF9D19DA71F01FA_A65793943D92ABFD_OFFSET UNITYSDK_OFFSET(0x291D900)
#define BFF9D19DA71F01FA_B29E160D02364004_OFFSET UNITYSDK_OFFSET(0x291DA10)
#define BFF9D19DA71F01FA_EB40064A784C1A6F_OFFSET UNITYSDK_OFFSET(0x291DC50)
#define BFF9D19DA71F01FA_EF9E708CB1AE39D6_OFFSET UNITYSDK_OFFSET(0x291D710)
#define BFF9D19DA71F01FA_F33B2A80553430F3_OFFSET UNITYSDK_OFFSET(0x291D7F0)
#define BFF9D19DA71F01FA_FB61C2F5128ABDD4_OFFSET UNITYSDK_OFFSET(0x291DCF0)
#define BFF9D19DA71F01FA_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x291DD90)
#define BFF9D19DA71F01FA__CTOR_OFFSET UNITYSDK_OFFSET(0x291DFB0)

inline static constexpr unsigned int BFF9D19DA71F01FA_TypeDefinitionIndex = 20455;

class BFF9D19DA71F01FA : public ::System::Object
{
public:
	static ::BFF9D19DA71F01FA** StaticGet_E2CE003B992A0F46()
	{
		return (::BFF9D19DA71F01FA**)Il2CppClass::FromTypeDefinitionIndex(BFF9D19DA71F01FA_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::AkRoomPortal*>* A1BAF026666972E9; // 0x10
	::System::Collections::Generic::List_1<::AkRoomPortal*>* FFEB71733F899A18; // 0x18
	::System::Collections::Generic::List_1<::AkSurfaceReflector*>* BA832AF75DD1C608; // 0x20
	::System::Collections::Generic::List_1<::AkSurfaceReflector*>* EC5D817E037089F9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFF9D19DA71F01FA__CTOR_OFFSET))(this);
	}

	static ::System::Void F33B2A80553430F3(::AkRoomPortal* E6BDBD71A59F2A09)
	{
		return ((::System::Void(*)(::AkRoomPortal*))((::PBYTE)hIl2Cpp + BFF9D19DA71F01FA_F33B2A80553430F3_OFFSET))(E6BDBD71A59F2A09);
	}

	static ::System::Void A65793943D92ABFD(::AkSurfaceReflector* EB6F9440E633603A)
	{
		return ((::System::Void(*)(::AkSurfaceReflector*))((::PBYTE)hIl2Cpp + BFF9D19DA71F01FA_A65793943D92ABFD_OFFSET))(EB6F9440E633603A);
	}

	static ::System::Void FB61C2F5128ABDD4(::AkSurfaceReflector* EB6F9440E633603A)
	{
		return ((::System::Void(*)(::AkSurfaceReflector*))((::PBYTE)hIl2Cpp + BFF9D19DA71F01FA_FB61C2F5128ABDD4_OFFSET))(EB6F9440E633603A);
	}

	static ::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFF9D19DA71F01FA_A1E97155B145443C_OFFSET))();
	}

	static ::System::Void EB40064A784C1A6F(::AkRoomPortal* E6BDBD71A59F2A09)
	{
		return ((::System::Void(*)(::AkRoomPortal*))((::PBYTE)hIl2Cpp + BFF9D19DA71F01FA_EB40064A784C1A6F_OFFSET))(E6BDBD71A59F2A09);
	}

	static ::System::Void EF9E708CB1AE39D6(::AkRoomPortal* E6BDBD71A59F2A09)
	{
		return ((::System::Void(*)(::AkRoomPortal*))((::PBYTE)hIl2Cpp + BFF9D19DA71F01FA_EF9E708CB1AE39D6_OFFSET))(E6BDBD71A59F2A09);
	}

	static ::System::Void FD792C24FE49920B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFF9D19DA71F01FA_FD792C24FE49920B_OFFSET))();
	}

	static ::System::Void B29E160D02364004(::AkRoom* BE6E61920F79DDD0)
	{
		return ((::System::Void(*)(::AkRoom*))((::PBYTE)hIl2Cpp + BFF9D19DA71F01FA_B29E160D02364004_OFFSET))(BE6E61920F79DDD0);
	}
};
